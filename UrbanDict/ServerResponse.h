//
//  ServerResponse.h
//  UrbanDict
//
//  Created by Michael on 11/04/2018.
//  Copyright © 2018 Michael. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ServerResponse : NSObject
@property (nonatomic, assign, readonly) NSInteger code;
@property (nonatomic, copy, readonly) NSString *message;
@property (nonatomic, strong, readonly) id data;
@property (nonatomic, assign, readonly) BOOL success;

- (instancetype)initWithDictionary:(NSDictionary *)dict NS_DESIGNATED_INITIALIZER;

@end

@interface ServerResponse (error)

- (NSString *)errorMessage;
- (NSError *)error;


@end
