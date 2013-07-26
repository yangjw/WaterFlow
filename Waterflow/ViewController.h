//
//  ViewController.h
//  Waterflow
//
//  Created by yangjw  on 13-7-26.
//  Copyright (c) 2013年 yangjw . All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EGORefreshTableHeaderView.h"
#import "EGORefreshTableFooterView.h"

@interface ViewController : UIViewController<EGORefreshTableDelegate>
{
	//EGOHeader
    EGORefreshTableHeaderView *_refreshHeaderView;
    //EGOFoot
    EGORefreshTableFooterView *_refreshFooterView;
    //
    BOOL _reloading;
}

@end
