import { Component } from '@angular/core';
import { LoginComponent } from '../login/login.component';
import { AuthToggleComponent } from '../auth_toggle/auth-toggle.component';

@Component({
  selector: 'app-auth-container',
  standalone: true,
  imports: [
    LoginComponent,
    AuthToggleComponent
  ],
  templateUrl: './auth-container.component.html',
  styleUrl: './auth-container.component.scss'
})
export class AuthContainerComponent {}