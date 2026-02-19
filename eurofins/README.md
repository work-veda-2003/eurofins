# Veda Registration Portal - Eurofins Project

A full-stack professional registration portal built with **.NET 9** and **Angular 21**, featuring a premium split-screen design and secure authentication flow.

## 🚀 Features

- **Direct Backend Integration**: Fully connected to a .NET 9 Web API.
- **Secure Authentication**: Functional Login and Registration system.
- **Modern UI/UX**: 
  - High-end split-screen layout inspired by modern SaaS applications.
  - Interactive mode switching (Login <-> Register).
  - Responsive member directory with real-time updates.
- **State Management**: Uses Angular Signals for reactive state handling.

## 🛠️ Technology Stack

### Backend (.NET 9)
- **Framework**: ASP.NET Core Web API.
- **Database**: Entity Framework Core with InMemory provider (perfect for portable demos).
- **Features**: RESTful controllers, CORS policies, and model-driven validation.

### Frontend (Angular 21)
- **Framework**: Angular (Standalone Components).
- **Styling**: Vanilla CSS with premium design tokens (Gradients, Glassmorphism).
- **Services**: Injectable `AuthService` and `UserService` using `HttpClient`.

## 🚦 How to Run Locally

### 1. Backend (.NET)
```bash
cd backend_dot_net/RegistrationApi
dotnet run --launch-profile https
```
*App will run at: `https://localhost:7034`*

### 2. Frontend (Angular)
```bash
cd frontend_angular/registration_app
npm install
npx ng serve --port 4201
```
*App will run at: `http://localhost:4201`*

---

## 📝 Important: SSL Certificate
Since the backend uses HTTPS with a developer certificate, you must **manually trust** it in your browser for the API calls to work:
1. Open [https://localhost:7034/api/users](https://localhost:7034/api/users) in your browser.
2. Click **Advanced** and then **Proceed to localhost (unsafe)**.
3. Refresh the Angular app at `http://localhost:4201`.

## 🔗 Repository
[https://github.com/work-veda-2003/eurofins.git](https://github.com/work-veda-2003/eurofins.git)
