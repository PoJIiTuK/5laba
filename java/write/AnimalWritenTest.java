package write;

import static org.junit.jupiter.api.Assertions.*;

import java.io.FileWriter;
import java.io.IOException;
import java.io.StringWriter;
import java.io.Writer;
import org.junit.jupiter.api.Test;

import iot.lviv.AbstractSearchAnimalsManager;
import writer.AnimalWriter;
import model.AbstractAnimal;

class AnimalWritenTest extends AbstractSearchAnimalsManager {

	@Test
	    public void testWriteToFile() throws IOException {
	        try (Writer fileWriter = new FileWriter("Path.csv")) {
	            AnimalWriter writer = new AnimalWriter();
	            writer.setCsvWriter(fileWriter);
	            writer.writeToFile(delfins);
	        }
	    }

	    @Test
	    public void testUsingString() throws IOException {
	        try (Writer csvWriter = new StringWriter()) {
	            AnimalWriter writer = new AnimalWriter();
	            writer.setCsvWriter(csvWriter);
	            writer.writeToFile(delfins);
	            String expectedString = "";
	            for (AbstractAnimal animal : delfins) {
	                expectedString += animal.getHeaders() + ", " + animal.toCSV() + "\r\n";
	            }
	            assertEquals(expectedString, writer.toString());
	        }
	    }

	}