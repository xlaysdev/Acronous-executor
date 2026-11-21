/* FUN_1801f6380 @ 1801f6380 */

undefined8 FUN_1801f6380(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1801f6780();
  uVar1 = DAT_1802fd8b8;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1802fd8b8 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}


