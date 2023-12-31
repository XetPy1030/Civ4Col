// *****************************************************************************
// Important:  Anything added here should also be added to FunctionDiscoveryManagedKeys.h
// *****************************************************************************

#pragma once

#define FD_SUBKEY                               L"SOFTWARE\\Microsoft\\Function Discovery\\"
#define FD_SUBKEY_CATEGORIES                    FD_SUBKEY L"Categories\\"

// *****************************************************************************
// Function Discovery Categories
// *****************************************************************************
// Important:  Anything added here should also be added to FunctionDiscoveryManagedKeys.h
// *****************************************************************************

#define FCTN_CATEGORY_PNP                       L"Provider\\Microsoft.Base.PnP"
#define FCTN_CATEGORY_REGISTRY                  L"Provider\\Microsoft.Base.Registry"
#define FCTN_CATEGORY_SSDP                      L"Provider\\Microsoft.Networking.SSDP"
#define FCTN_CATEGORY_WSDISCOVERY               L"Provider\\Microsoft.Networking.WSD"
#define FCTN_CATEGORY_NETBIOS                   L"Provider\\Microsoft.Networking.Netbios"
#define FCTN_CATEGORY_WCN                       L"Provider\\Microsoft.Networking.WCN"
#define FCTN_CATEGORY_PUBLICATION               L"Provider\\Microsoft.Base.Publication"
#define FCTN_CATEGORY_PNPXASSOCIATION           L"Provider\\Microsoft.PnPX.Association"

#define FCTN_CATEGORY_NETWORKDEVICES            L"Layered\\Microsoft.Networking.Devices"
#define FCTN_CATEGORY_DEVICES                   L"Layered\\Microsoft.Base.Devices"

// *****************************************************************************
// Function Discovery SubCategories
// *****************************************************************************
// Important:  Anything added here should also be added to FunctionDiscoveryManagedKeys.h
// *****************************************************************************

// Subcategories of Devices FCTN_CATEGORY_DEVICES
#define FCTN_SUBCAT_DEVICES_WSDPRINTERS         L"WSDPrinters"

// Subcategories of Devices FCTN_CATEGORY_NETWORKDEVICES
#define FCTN_SUBCAT_NETWORKDEVICES_SSDP         L"SSDP"
#define FCTN_SUBCAT_NETWORKDEVICES_WSD          L"WSD"

// Subcategories of Registry
#define FCTN_SUBCAT_REG_PUBLICATION             L"Publication"
#define FCTN_SUBCAT_REG_DIRECTED                L"Directed"

// *****************************************************************************
// Important:  Anything added here should also be added to FunctionDiscoveryManagedKeys.h
// *****************************************************************************


