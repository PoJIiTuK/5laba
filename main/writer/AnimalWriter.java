package writer;

import java.io.IOException;
import java.io.Writer;
import java.util.List;
import model.AbstractAnimal;


public class AnimalWriter {
	
	 private Writer csvWriter;
	
	public void setCsvWriter(Writer csvWriter) {
        this.csvWriter = csvWriter;
    }

    public void writeToFile(List<AbstractAnimal> animals) throws IOException {
        String textToWrite;
        for (AbstractAnimal animal : animals) {
            textToWrite = animal.getHeaders() + ", " + animal.toCSV() + "\r\n";
            csvWriter.write(textToWrite);
        }
    }

    public String toString() {
        return csvWriter.toString();
    }
}

