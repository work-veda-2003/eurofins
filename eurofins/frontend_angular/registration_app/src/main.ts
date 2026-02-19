import { bootstrapApplication } from '@angular/platform-browser';
import { provideHttpClient } from '@angular/common/http';

import { AuthContainerComponent } from './components/auth_container/auth-container.component';

bootstrapApplication(AuthContainerComponent, {
  providers: [
    provideHttpClient()
  ]
})
.catch(err => console.error(err));