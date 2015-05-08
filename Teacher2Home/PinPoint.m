//
//  PinPoint.m
//  EAN Restaurant
//
//  Created by Luis Soler on 8/05/15.
//  Copyright (c) 2015 Luis Soler. All rights reserved.
//

#import "PinPoint.h"

@implementation PinPoint
-(id)initAtEAN{
    self = [super init];
    if (self) {
        _coordinate = CLLocationCoordinate2DMake(4.663543, -74.055094);
        _title = @"Bogota";
    }
    
    return self;
}

-(void)createPinPointWithCoordinate:(CLLocationCoordinate2D)coordinate andTitle:(NSString *)title{
    _coordinate=coordinate;
    _title=title;
}

@end
