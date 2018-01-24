//
//  PluginObjC.m
//  FrameworkObjC
//
//  Created by Denis Zubkov on 24/1/18.
//  Copyright © 2018 Denis Zubkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PluginObjC.h"

@implementation PluginObjC

- (id)init {
    NSLog(@"__ PluginObjC.init");
    self = [super init];
    if (self) {
        // ... init instance vars
    }
    return self;
}

- (void)sayHello {
    NSLog(@"__ PluginObjC.sayHello");
}

- (NSString *)convertString:(NSString *)string {
    return [[NSString alloc] initWithFormat:@"__ PluginObjC.convertString: %@", string];
}

@end
