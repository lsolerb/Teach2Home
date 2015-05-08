//
//  MapaIosViewController.h
//  Teacher2Home
//
//  Created by Luis Soler on 8/05/15.
//  Copyright (c) 2015 Luis Soler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "PinPoint.h"

@interface MapaIosViewController : UIViewController<MKMapViewDelegate, CLLocationManagerDelegate>

@property CLLocationManager * locationManager;
@property (strong,nonatomic ) IBOutlet MKMapView *myMap;
@end
