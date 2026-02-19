import { Component, EventEmitter, Output } from '@angular/core';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-auth-toggle',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './auth-toggle.component.html',
  styleUrl: './auth-toggle.component.scss'
})
export class AuthToggleComponent {

  @Output() switchToRegister = new EventEmitter<void>();

  onRegisterClick() {
    this.switchToRegister.emit();
  }
}