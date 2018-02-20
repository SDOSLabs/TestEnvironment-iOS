//
//  Constants.h
//  TestEnvironment
//
//  Created by Rafael Fernandez Alvarez on 20/02/2018.
//  Copyright © 2018 Rafael Fernandez Alvarez. All rights reserved.
//

#if APP_DEBUG
    #define WS_ENDPOINT @"https://endpoint.debug.es"
#elif APP_PREPRODUCTION
    #define WS_ENDPOINT @"https://endpoint.preproduction.es"
#else
    #define WS_ENDPOINT @"https://endpoint.release.es"
#endif
