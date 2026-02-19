using Microsoft.EntityFrameworkCore;
using RegistrationApi.Models;

namespace RegistrationApi.Data
{
    public class ApiDbContext : DbContext
    {
        public ApiDbContext(DbContextOptions<ApiDbContext> options) : base(options) { }

        public DbSet<User> Users { get; set; }
    }
}
