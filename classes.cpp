    
    #include<iostream>
    using namespace std;
    class Pully
    {
    
    int teeth;
    
    public:
    Pully(int n)
    {
    teeth = n;
    cout<<"Pully constructor called!"<<endl;
    
    
    }
    
    void show()
    {
    cout<<"Number of Teeth of Pully are: "<<teeth<<endl;
    
    }
    
    
    };
    class GearBox{
    
    string T;
    Pully p;
    public:
    GearBox(string args,const Pully p): T(args), p(p)
    
    {
    cout<<"GearBox constructor called!" <<endl;
    
    }
    void show()
    {
    cout<<"Transmition of Vihecal: "<<T<<endl;
    p.show();
    }
    
    
    
    };
    
    class vehical{
    
    string name , color;
    GearBox g;
    public:
    vehical(string n, string c, const GearBox d): name(n), color(c), g(d)
    {
    cout<<"vehical constructor called: "<<endl;
    
    
    
    }
    void show ()
    {
    cout<<"Model of vehical is : "<<name<<endl;
    cout<<"Color of vehical is : "<<color<<endl;
    g.show();
    
    }
    
    
    
    };
    main()
    {
    Pully p (20);
    GearBox g("Manul",p);
    vehical v("Honda", "Black", g);
    v.show();
    system("Pause");
    
    }
