//export default: We can name person whatever we want because it's the default 
import person from './person.js'
import prs from './person.js'
	
//To explicitly target specific things from that file
import {baseData} from './utility.js'
import {mul} from './utility.js'

//We can assign an alias
import {mul as multiply} from './utility.js'
import {printMohamed as mkhy} from './utility.js'

//If we have multiple named exports in a file and we want to import all of them 
import * as bundled from './utility.js'

//If we have more than once and we want to import special exports
import {baseData},{printMohamed} from './utility.js'





