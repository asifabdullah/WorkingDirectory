using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace MVCMovie.Controllers
{
    public class HelloWorldController : Controller
    {
        // 
        // GET: /HelloWorld/ 

        public ActionResult Index()
        {
            return View();
        }

        // 
        // GET: /HelloWorld/Welcome/ 

        public ActionResult Welcome(string name,int id =3)
        {
            //return HttpUtility.HtmlEncode("This is the Welcome action method... and name is :"+name+" and id is "+id);
            ViewBag.Message = "Hello " + name;
            ViewBag.Id = id;
            return View();
        }

    }
}