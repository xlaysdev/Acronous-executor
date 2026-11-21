/* FUN_18010cb10 @ 18010cb10 */

undefined8 FUN_18010cb10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1801f0c50(param_2,
                        "tunnel error: failed to create underlying connectionio error establishing tunnelmissing destination hostproxy authorization requiredproxy response headers too longunexpected end of fileunsuccessful"
                        ,0xe);
  if (cVar1 == '\0') {
    uVar2 = FUN_1801f0c50(param_2,&DAT_18023d040 + *(int *)(&DAT_18023d040 + *param_1 * 4),
                          *(undefined8 *)(&DAT_18023d008 + *param_1 * 8));
    return uVar2;
  }
  return 1;
}


