// services/auth.service.ts

import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';

import { LoginModel } from '../models/login.model';
import { RegisterRequestDto } from '../models/register-request.dto';

@Injectable({
  providedIn: 'root'
})
export class AuthService {

  private baseUrl = 'https://localhost:5001/api/auth'; // change to your backend URL

  constructor(private http: HttpClient) {}

  // 🔹 LOGIN
  login(data: LoginModel): Observable<any> {
    return this.http.post(`${this.baseUrl}/login`, data);
  }

  // 🔹 REGISTER
  register(data: RegisterRequestDto): Observable<any> {
    return this.http.post(`${this.baseUrl}/register`, data);
  }
}