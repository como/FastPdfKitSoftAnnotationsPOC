//
//  MFSearchResultDelegate.h
//  FastPDFKitTest
//
//  Created by Nicolò Tosi on 10/21/10.
//  Copyright 2010 MobFarm S.r.l. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MFSearchResult;

@protocol SearchResultDelegate

-(void)updateResults:(NSArray *)searchResults withResults:(NSArray *)addedResult forPage:(NSUInteger)page;

-(void)searchDidStop;
-(void)searchDidStart;
-(void)searchGotCancelled;

@end
