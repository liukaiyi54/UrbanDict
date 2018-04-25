//
//  ServerResponse.m
//  UrbanDict
//
//  Created by Michael on 11/04/2018.
//  Copyright © 2018 Michael. All rights reserved.
//

#import "ServerResponse.h"
#import "ServerAPIConstants.h"

@implementation ServerResponse

- (instancetype)init {
    return [self initWithDictionary:nil];
}

- (instancetype)initWithDictionary:(NSDictionary *)dict {
    self = [super init];
    if (self) {
        _code = [[dict objectForKey:@"code"] integerValue];
        _message = [[dict objectForKey:@"message"] copy];
        _data = [[dict objectForKey:@"data"] copy];
    }
    return self;
}

- (BOOL)success {
    return _code == kServerAPICodeSuccess;
}

@end
