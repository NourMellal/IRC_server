#include <map> 
//----> server / Reactor implementing  this class using the singleton design patter
class server {  
    private: 
        std::map< int  , eventHandler> registred_events  ;   
        server() ;   
    public:  
        static server& getInstance() ;    
        int registre (eventHandler &e )  ; //-----> pushing in map ;  
        int remove() ;  ///-----> remove registred  event from the map 
        void dispatch() ;     
}