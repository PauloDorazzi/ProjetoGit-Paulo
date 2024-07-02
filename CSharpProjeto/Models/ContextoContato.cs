using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace CSharpProjeto.Models
{
    [Table("ContextoContato")]
    public class ContextoContato
    {
        [Column("Nome")]
        [Display(Name = "Nome")]
        public string Nome { get; set; }

        [Column("Contato")]
        [Display(Name = "Contato")]
        public int Contato { get; set; }

        [Column("Email")]
        [Display(Name = "Email")]
        public string Email { get; set; }
    }
}
