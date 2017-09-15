/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef DocUtils_Link_h_
#define DocUtils_Link_h_

#ifndef DOCUTILS_LINKAGE
    #ifdef WIN32
        #ifdef FRAMEWORK_BUILD
            #define DOCUTILS_LINKAGE __declspec(dllexport)
        #else
            #define DOCUTILS_LINKAGE __declspec(dllimport)
        #endif
    #else
        #define DOCUTILS_LINKAGE
    #endif
#endif

#include "Doc/DocUtils/EnumConvertersXml.h"
#include "DefnObjectConverter.h"
#include "ParameterUtils.h"
#include "AttachmentUtils.h"
#include "DocXmlUtils.h"

#endif /* DocUtils_Link_h_ */
