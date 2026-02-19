import { Injectable, inject } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';
import { User } from '../models/user';

@Injectable({
    providedIn: 'root'
})
export class UserService {
    private http = inject(HttpClient);
    private apiUrl = 'https://localhost:7034/api/users'; // Standard ASP.NET Core dev port

    getUsers(): Observable<User[]> {
        return this.http.get<User[]>(this.apiUrl);
    }

    registerUser(user: User): Observable<User> {
        return this.http.post<User>(this.apiUrl, user);
    }
}
