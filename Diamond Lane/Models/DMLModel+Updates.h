//
//  DMLModel+Updates.h
//  Diamond Lane
//
//  Created by Aaron Wojnowski on 2015-09-19.
//  Copyright © 2015 CS Boys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (DMLModelUpdates)

-(BOOL)attributesKey:(NSString *)attributesKey canBeUpdatedFromAttributes:(NSDictionary *)attributes;

@end
