/**
 * \file ShowerRecoModuleBase.h
 *
 * \ingroup SuperaLight
 *
 * \brief Class def header for a class ShowerRecoModuleBase
 *
 * @author cadams
 */

/** \addtogroup ModularAlgo

    @{*/
#ifndef GALLERY_FMWK_SUPERA_DUNE_WIRE_H
#define GALLERY_FMWK_SUPERA_DUNE_WIRE_H

#include "supera_module_base.h"


/**
   \class ShowerRecoModuleBase
   User defined class ShowerRecoModuleBase ... these comments are used to generate
   doxygen documentation!
 */
namespace supera {

class DUNEWire : SuperaModuleBase {

public:

    /// Default constructor
    DUNEWire(){_name = "DUNEWire";_verbose=false;}

    /// Default destructor
    ~DUNEWire() {}

    /**
     * @brief get the name of this module, used in helping organize order of modules and insertion/removal
     * @return name
     */
    std::string name() {return _name;}

    /**
     * @brief Virtual function that is overridden in child class,
     * does the slicing work.
     *
     */
    void slice(gallery::Event * ev, larcv::IOManager * io);

    /**
     * @brief Function to initialize the algorithm (such as setting up tree)
     */
    void initialize();



protected:





    std::string _name;

    bool _verbose;



};

} // showerreco

#endif
/** @} */ // end of doxygen group

