//
//  MasterViewController.h
//  EveryDoItAnotherTime
//
//  Created by Shaun Campbell on 2016-09-28.
//  Copyright © 2016 Shaun Campbell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "EveryDoItAnotherTime+CoreDataModel.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<Event *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

