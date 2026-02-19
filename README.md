# Veda Registration Portal - Eurofins Project
<img width="1907" height="1072" alt="image" src="https://github.com/user-attachments/assets/beca8747-f12b-4223-ad9c-7d2f8879c150" />


A full-stack professional registration portal built with **.NET 9** and **Angular 21**, featuring a premium split-screen design and secure authentication flow.

---

## 🔍 **Current Status & Troubleshooting (Why it might not be working)**

If you are experiencing issues with the buttons or flow in the frontend, please check these common reasons:

1.  **SSL Certificate Block (Most Likely)**: 
    *   **The Problem**: The backend runs on `HTTPS`, but uses a self-signed developer certificate. Browsers block requests to untrusted APIs by default.
    *   **The Fix**: Open [https://localhost:7034/api/users](https://localhost:7034/api/users) in a new tab. If you see a "Your connection is not private" warning, click **Advanced** and then **Proceed to localhost (unsafe)**. Refresh your Angular app.
2.  **In-Memory Database**: 
    *   **The Problem**: The backend uses an in-memory database. 
    *   **The Fix**: Every time you restart the .NET server, all registered users are cleared. You must register a new account every time the server restarts.
3.  **Port Conflict**: 
    *   The frontend is configured to run on **Port 4201**. If you try to run it on 4200, the CORS policy might block the request if the backend isn't updated. Ensure you use `npx ng serve --port 4201`.
4.  **Browser Refresh**:
    *   Angular updates sometimes don't reflect immediately due to caching. Use **Ctrl + F5** for a hard reload.

---

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
