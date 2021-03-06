//
//  DSMRThemePickerController.h
//  Mapresent
//
//  Created by Justin Miller on 1/31/12.
//  Copyright (c) 2012 Development Seed. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSMRThemePickerController : UIViewController

@property (nonatomic, strong) NSDictionary *info;
@property (nonatomic, assign) BOOL transitioning;
@property (nonatomic, readonly, strong) UIImage *snapshot;

- (id)initWithInfo:(NSDictionary *)info;

@end