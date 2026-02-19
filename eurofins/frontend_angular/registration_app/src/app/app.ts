import { Component, OnInit, inject, signal } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';
import { AuthService } from './services/auth.service';
import { UserService } from './services/user.service';
import { User, LoginRequest } from './models/user';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [CommonModule, FormsModule],
  templateUrl: './app.html',
  styleUrl: './app.css'
})
export class App implements OnInit {
  authService = inject(AuthService);
  private userService = inject(UserService);

  users = signal<User[]>([]);

  // Auth states
  isLoginMode = true;
  authError = signal<string | null>(null);
  authSuccess = signal<string | null>(null);

  // Form models
  loginData: LoginRequest = { username: '', password: '' };
  registerData: User = this.resetUser();

  ngOnInit() {
    if (this.authService.isAuthenticated()) {
      this.loadUsers();
    }
  }

  toggleMode() {
    this.isLoginMode = !this.isLoginMode;
    this.authError.set(null);
    this.authSuccess.set(null);
  }

  onLogin() {
    this.authError.set(null);
    this.authSuccess.set(null);

    this.authService.login(this.loginData).subscribe({
      next: (user) => {
        this.authSuccess.set(`Logged in successfully! Welcome back, ${user.firstName}.`);
        this.loadUsers();
        // Keep message for a few seconds if staying on dashboard, 
        // but here we likely transition immediately since authService.currentUser() becomes truthy
      },
      error: (err) => {
        console.error('Login error:', err);
        this.authError.set(err.error || 'Invalid username or password. Please try again.');
      }
    });
  }

  onRegister() {
    this.authError.set(null);
    this.authSuccess.set(null);

    this.authService.register(this.registerData).subscribe({
      next: (user) => {
        this.authSuccess.set('Account created successfully! You are now logged in.');
        this.loadUsers();
        this.registerData = this.resetUser();
      },
      error: (err) => {
        console.error('Registration error:', err);
        this.authError.set(err.error || 'Registration failed. Username might be taken.');
      }
    });
  }

  onLogout() {
    this.authService.logout();
    this.users.set([]);
    this.authSuccess.set('You have been logged out.');
    setTimeout(() => this.authSuccess.set(null), 3000);
  }

  loadUsers() {
    this.userService.getUsers().subscribe({
      next: (users) => this.users.set(users),
      error: (err) => console.error('Error loading users:', err)
    });
  }

  private resetUser(): User {
    return {
      username: '',
      password: '',
      firstName: '',
      lastName: '',
      email: '',
      phone: ''
    };
  }
}
