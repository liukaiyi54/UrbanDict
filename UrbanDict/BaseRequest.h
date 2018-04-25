//
//  BaseRequest.h
//  UrbanDict
//
//  Created by Michael on 11/04/2018.
//  Copyright © 2018 Michael. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ServerResponse.h"

typedef void(^ServerAPICompletion)(ServerResponse *response);

typedef NS_ENUM(NSUInteger, RequestMethod) {
    RequestMethodPOST,
    RequestMethodGET,
};

@interface BaseRequest : NSObject

@property (nonatomic, strong) NSURLSessionDataTask *dataTask;
@property (nonatomic, copy) ServerAPICompletion completionBlock;

- (void)doRequestWithCompletion:(ServerAPICompletion)completion;

- (ServerResponse *)cachedResponse;

// --- @required --- //

- (NSString *)requestURI;
- (NSString *)requestJSON;

// --- @optional --- //

- (NSString *)requestURL;
- (RequestMethod)requestMethod;

@end
