import { Injectable, inject, signal } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable, tap } from 'rxjs';
import { User, LoginRequest } from '../models/user';

@Injectable({
    providedIn: 'root'
})
export class AuthService {
    private http = inject(HttpClient);
    private apiUrl = 'https://localhost:7034/api/auth';

    currentUser = signal<User | null>(null);

    register(user: User): Observable<User> {
        return this.http.post<User>(`${this.apiUrl}/register`, user).pipe(
            tap(user => this.currentUser.set(user))
        );
    }

    login(credentials: LoginRequest): Observable<User> {
        return this.http.post<User>(`${this.apiUrl}/login`, credentials).pipe(
            tap(user => this.currentUser.set(user))
        );
    }

    logout() {
        this.currentUser.set(null);
    }

    isAuthenticated(): boolean {
        return this.currentUser() !== null;
    }
}
