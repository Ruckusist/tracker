/* -----------------------------------------
   Kinetech-assets.ino -- new_func.h

   A Dump for all the things so they arent cluttering the INO...
   DO not start splitting stuff yet. Keep the poop in 1 pile.

   Notes:

   Stuff:

   Start Date: 9-18-17
   Author:
   Contributors:
   Version Status: NOT working...


   ----------------------------------------- */
#ifndef particle_controller
#include <math.h>
#include <AssetTracker.h>

class particle_controller {
    // Always try to document stuff.

    public:

        particle_controller();

        float
            get_float(void);

    private:
        void
            init(void);

};
#endif // new_func_h
