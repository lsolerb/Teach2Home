//
//  PinPoint.h
//  EAN Restaurant
//
//  Created by Luis Soler on 8/05/15.
//  Copyright (c) 2015 Luis Soler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>


@interface PinPoint : NSObject <MKAnnotation>

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly, copy) NSString *title;

-(id)initAtEAN;
-(void)createPinPointWithCoordinate:(CLLocationCoordinate2D) coordinate andTitle:(NSString*)title;

@end
