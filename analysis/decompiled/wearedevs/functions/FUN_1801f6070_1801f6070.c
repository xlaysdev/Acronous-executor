/* FUN_1801f6070 @ 1801f6070 */

void FUN_1801f6070(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1801f6050();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1801f6060();
  *puVar1 = *puVar1 | 2;
  return;
}


