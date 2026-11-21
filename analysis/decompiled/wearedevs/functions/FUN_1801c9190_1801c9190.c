/* FUN_1801c9190 @ 1801c9190 */

void * FUN_1801c9190(void)

{
  longlong lVar1;
  void *_Dst;
  longlong local_400;
  undefined1 local_3f8 [120];
  longlong local_380;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_280 [256];
  undefined8 local_180;
  undefined8 local_100;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = local_3f8;
  local_20 = 0xfffffffffffffffe;
  local_400 = 0;
  local_380 = 0;
  FUN_180027490();
  lVar1 = thunk_FUN_1801d32d0(0x818,8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x818);
  }
  *(undefined8 *)(lVar1 + 0x810) = 0;
  local_400 = lVar1;
  local_380 = lVar1;
  memcpy(local_280,&local_400,0x100);
  local_300 = 1;
  local_2f8 = 1;
  local_180 = 0;
  local_100 = 0;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x280,0x80);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x280);
  }
  memcpy(_Dst,&local_300,0x280);
  return _Dst;
}


