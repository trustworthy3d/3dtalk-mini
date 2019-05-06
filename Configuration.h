#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

// USE_CASE define
// 0 - Talk2 PRO
// 1 - Talk2 Mini
// 2 - Talk2 IND
// 3 - Talk2 PRO400
#define USE_CASE 1// 

#if USE_CASE == 0
#include "Configuration_for_talk2.h"
#define	TALK_PRO
#endif

#if USE_CASE == 1
#include "Configuration_for_mini.h"
#define	TALK_MINI
#endif

#if USE_CASE == 2
#include "Configuration_for_talk2ind.h"
#define	TALK_IND
#endif

#if USE_CASE == 3
#include "Configuration_for_pro400.h" 
#define	PRO400
#endif

#endif //end _CONFIGURATION_H_

