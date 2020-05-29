char * undo="ndo\n";
int i, flagSalida=0, estado=INICIO, noHayError=1;

while(flagSalida==0 && noHayError) {

    turno=getchar();

	switch(estado){

		case INICIO: {

		    switch(turno) {
				case 'w': {
				    charAnterior=turno;
				    estado=MOVIMIENTO;
				    break;
				}
				case 'a': {
				    charAnterior=turno;
				    estado=MOVIMIENTO;
				    break;
				}
				case 'd': {
				    charAnterior=turno;
				    estado=MOVIMIENTO;
				    break;
				}
				case 'u': {
					for(i=0; i<4 && getchar() == undo[i] ; i++)
						;
					if(i==4)
						estado=UNDO;
					else
						estado=ERROR;
					break;
				}
				case 's': {
				    charAnterior=turno;
					// CAMBIAR
					estado=SAVE;
					break;
				}
				case 'q': {
				    // CAMBIAR
				    estado=QUIT;
				    break;
				}
				default:
                    estado=ERROR;

		case UNDO: {
