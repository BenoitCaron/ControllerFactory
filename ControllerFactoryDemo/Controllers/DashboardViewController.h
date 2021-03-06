//
//  DashboardViewController.h
//  ControllerFactoryDemo
//
//  Created by Benoit Caron on 16/01/2018.
//  Copyright © 2018 worldline. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"

@import ControllerFactory;

@interface DashboardViewController : BaseViewController <ControllerFactoryUseCaseCompliant>

@end
