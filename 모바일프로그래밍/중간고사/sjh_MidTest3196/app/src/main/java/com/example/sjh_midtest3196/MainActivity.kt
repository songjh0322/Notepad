package com.example.sjh_midtest3196

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.sjh_midtest3196.ui.theme.Sjh_MidTest3196Theme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            Sjh_MidTest3196Theme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    MainScreen()
                }
            }
        }
    }

    @Composable
    fun EditNameField(
        value: String,
        onValueChange: (String) -> Unit,
        label: Int
    ) {
        OutlinedTextField(
            value = value,
            keyboardOptions = KeyboardOptions(
                imeAction = ImeAction.Next,
                keyboardType = KeyboardType.Text
            ),
            modifier = Modifier.padding(bottom = 0.dp),
            onValueChange = onValueChange,
            label = { Text(text = stringResource(id = label)) },

            )
    }

    @Composable
    fun EditNumberField(
        value: String,
        onValueChange: (String) -> Unit,
        label: Int
    ) {
        OutlinedTextField(
            value = value,
            keyboardOptions = KeyboardOptions(
                imeAction = ImeAction.Done,
                keyboardType = KeyboardType.Number
            ),
            modifier = Modifier.padding(bottom = 0.dp),
            onValueChange = onValueChange,
            label = { Text(text = stringResource(id = label)) },

            )
    }




    @Composable
    fun MainScreen() {

        var friendName by remember {
            mutableStateOf("")
        }

        var phoneNumber by remember {
            mutableStateOf("")
        }



        Column(
            modifier = Modifier.padding(horizontal = 60.dp),

            verticalArrangement = Arrangement.Center
        ) {
            Text(
                text = "202114226 송재현 친구등록",
                modifier = Modifier.padding(bottom = 0.dp),
                fontSize = 20.sp,
                fontWeight = FontWeight.Bold,
            )

            EditNameField(
                friendName,
                { friendName = it },
                R.string.friendName
            )

            EditNumberField(
                phoneNumber,
                { phoneNumber = it },
                R.string.phoneNumber
            )
            Button(onClick = { /*TODO*/ }) {
                Text(text = "추가하기")

            }

        }


    }
}


