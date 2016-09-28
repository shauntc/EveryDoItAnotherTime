//
//  DetailViewController.h
//  EveryDoItAnotherTime
//
//  Created by Shaun Campbell on 2016-09-28.
//  Copyright © 2016 Shaun Campbell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EveryDoItAnotherTime+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

