import { Component, OnInit, inject, signal } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';
import { UserService } from './services/user.service';
import { User } from './models/user';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [CommonModule, FormsModule],
  templateUrl: './app.html',
  styleUrl: './app.css'
})
export class App implements OnInit {
  private userService = inject(UserService);

  users = signal<User[]>([]);
  newUser: User = this.resetUser();

  ngOnInit() {
    this.loadUsers();
  }

  loadUsers() {
    this.userService.getUsers().subscribe(users => {
      this.users.set(users);
    });
  }

  onSubmit() {
    if (this.newUser.firstName && this.newUser.email) {
      this.userService.registerUser(this.newUser).subscribe(() => {
        this.loadUsers();
        this.newUser = this.resetUser();
      });
    }
  }

  private resetUser(): User {
    return {
      firstName: '',
      lastName: '',
      email: '',
      phone: ''
    };
  }
}
