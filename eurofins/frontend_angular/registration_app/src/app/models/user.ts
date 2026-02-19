export interface User {
  id?: number;
  username: string;
  password?: string;
  firstName: string;
  lastName: string;
  email: string;
  phone: string;
  registeredAt?: Date;
}

export interface LoginRequest {
  username: string;
  password: string;
}
