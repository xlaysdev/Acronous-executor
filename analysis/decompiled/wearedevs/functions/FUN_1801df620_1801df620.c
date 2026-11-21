/* FUN_1801df620 @ 1801df620 */

ulonglong FUN_1801df620(void)

{
  ulonglong local_10;
  
  local_10 = 0;
  GetSystemTimePreciseAsFileTime(&local_10);
  return local_10 & 0xffffffff;
}


