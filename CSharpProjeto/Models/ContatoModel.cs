using Microsoft.EntityFrameworkCore;

namespace CSharpProjeto.Models
{
    public class ContatoModel : DbContext
    {
        public ContatoModel(DbContextOptions <ContatoModel> options) : base(options)
        {
        
        }

        public DbSet<ContextoContato> Produtos { get; set; }
    }
}
