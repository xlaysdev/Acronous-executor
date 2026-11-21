/* FUN_1801dc490 @ 1801dc490 */

ulonglong FUN_1801dc490(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_24;
  
  uVar2 = *param_1;
  LOCK();
  bVar1 = *param_2;
  *param_2 = 0;
  UNLOCK();
  if (bVar1 == 2) {
    WakeByAddressSingle(param_2);
  }
  local_24 = uVar2;
  iVar3 = WaitOnAddress(param_1,&local_24,4,0xffffffff);
  if (iVar3 != 1) {
    GetLastError();
  }
  uVar4 = 0;
  LOCK();
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_2 = 1;
  }
  else {
    uVar4 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 != 0) {
    uVar4 = FUN_180200390(param_2);
  }
  return uVar4;
}


