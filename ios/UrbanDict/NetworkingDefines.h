//
//  NetworkingDefines.h
//  UrbanDict
//
//  Created by Michael on 16/04/2018.
//  Copyright © 2018 Michael. All rights reserved.
//

#ifndef NetworkingDefines_h
#define NetworkingDefines_h

@class APIBaseManager;
@class ServerResponse;

typedef NS_ENUM (NSUInteger, ServiceAPIEnvironment) {
    ServiceAPIEnvironmentDevelop,
    ServiceAPIEnvironmentReleaseCandidate,
    ServiceAPIEnvironmentRelease,
};

typedef NS_ENUM (NSUInteger, APIManagerRequestType) {
    APIManagerRequestTypePost,
    APIManagerRequestTypeGet,
    APIManagerRequestTypePut,
    APIManagerRequestTypeDelete,
};

typedef NS_ENUM (NSUInteger, APIManagerErrorType) {
    APIManagerErrorTimeout,
    APIManagerErrorCancelled,
    APIManagerErrorNoNetwork,
    APIManagerErrorNeedLogin,
};

typedef NS_ENUM (NSUInteger, APIManagerCachePolicy) {
    APIManagerCachePolicyNoCache = 0,
    APIManagerCachePolicyMemory = 1 << 0,
    APIManagerCahcePolicyDisk = 1 << 1,
};



#endif /* NetworkingDefines_h */
